// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// agg_gr
List agg_gr(NumericMatrix ts_old, const int freq_new, const std::string& method);
RcppExport SEXP regts_agg_gr(SEXP ts_oldSEXP, SEXP freq_newSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type ts_old(ts_oldSEXP);
    Rcpp::traits::input_parameter< const int >::type freq_new(freq_newSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    __result = Rcpp::wrap(agg_gr(ts_old, freq_new, method));
    return __result;
END_RCPP
}
// parse_regperiod
NumericVector parse_regperiod(const std::string& period_text, double frequency);
RcppExport SEXP regts_parse_regperiod(SEXP period_textSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type period_text(period_textSEXP);
    Rcpp::traits::input_parameter< double >::type frequency(frequencySEXP);
    __result = Rcpp::wrap(parse_regperiod(period_text, frequency));
    return __result;
END_RCPP
}
// parse_regperiod_range
NumericVector parse_regperiod_range(const std::string& period_text, double frequency);
RcppExport SEXP regts_parse_regperiod_range(SEXP period_textSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type period_text(period_textSEXP);
    Rcpp::traits::input_parameter< double >::type frequency(frequencySEXP);
    __result = Rcpp::wrap(parse_regperiod_range(period_text, frequency));
    return __result;
END_RCPP
}
// get_regperiod_range
NumericVector get_regperiod_range(const SEXP& x);
RcppExport SEXP regts_get_regperiod_range(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    __result = Rcpp::wrap(get_regperiod_range(x));
    return __result;
END_RCPP
}
// select_rows
List select_rows(const SEXP ts_old, const NumericVector selector);
RcppExport SEXP regts_select_rows(SEXP ts_oldSEXP, SEXP selectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const SEXP >::type ts_old(ts_oldSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type selector(selectorSEXP);
    __result = Rcpp::wrap(select_rows(ts_old, selector));
    return __result;
END_RCPP
}
// convert_range_selector
NumericVector convert_range_selector(const NumericVector& selector, const NumericVector& ts_range);
RcppExport SEXP regts_convert_range_selector(SEXP selectorSEXP, SEXP ts_rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type selector(selectorSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ts_range(ts_rangeSEXP);
    __result = Rcpp::wrap(convert_range_selector(selector, ts_range));
    return __result;
END_RCPP
}
