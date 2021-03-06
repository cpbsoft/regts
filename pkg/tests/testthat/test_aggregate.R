library(regts)
library(testthat)

context("aggregate")

rm(list = ls())

# Test the alignment of the first period for aggregate.regts.
# aggregate.regts uses aggregate.ts, but aligns the first period
# with the periods of the lower frequency (see R/methods.R).

set.seed(12345)

test_that("quarterly to year, single timeseries", {
  p <- period_range("2009Q2", "2013Q3")
  ts_q <- regts(rnorm(nperiod(p)), start = start_period(p))
  ts_y1 <- aggregate(ts_q)
  ts_y2 <- aggregate(ts_q["2009Q3/"])
  ts_y3 <- aggregate(ts_q["2009Q4/"])
  ts_y4 <- aggregate(ts_q["2010Q1/"])
  expect_equal(ts_y1, ts_y2)
  expect_equal(ts_y1, ts_y3)
  expect_equal(ts_y1, ts_y4)
})

test_that("monthly to quarterly, two timeseries", {
  p <- period_range("2010M2", "2011M11")
  ts_m <- regts(matrix(rnorm(nperiod(p) * 2), ncol = 2),
                start = start_period(p))
  ts_q1 <- aggregate(ts_m, nfrequency = 4)
  ts_q2 <- aggregate(ts_m["2010M3/"], nfrequency = 4)
  ts_q3 <- aggregate(ts_m["2010M4/"], nfrequency = 4)
  expect_equal(ts_q1, ts_q2)
  expect_equal(ts_q1, ts_q3)
})

test_that("errors", {
  p <- period_range("2010M2", "2011M11")
  ts_m <- regts(matrix(rnorm(nperiod(p) * 2), ncol = 2),
                start = start_period(p))
  expect_error(aggregate(ts_m, nfrequency = 1),
               "Not enough observations to perform aggregation")
  expect_error(aggregate(ts_m[, 1], nfrequency = 1),
               "Not enough observations to perform aggregation")
})
