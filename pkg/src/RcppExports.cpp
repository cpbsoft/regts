// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// agg_gr
List agg_gr(NumericMatrix ts_old, const int freq_new, const std::string& method);
RcppExport SEXP regts_agg_gr(SEXP ts_oldSEXP, SEXP freq_newSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ts_old(ts_oldSEXP);
    Rcpp::traits::input_parameter< const int >::type freq_new(freq_newSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(agg_gr(ts_old, freq_new, method));
    return rcpp_result_gen;
END_RCPP
}
// parse_period
NumericVector parse_period(const std::string& period_text, double frequency);
RcppExport SEXP regts_parse_period(SEXP period_textSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type period_text(period_textSEXP);
    Rcpp::traits::input_parameter< double >::type frequency(frequencySEXP);
    rcpp_result_gen = Rcpp::wrap(parse_period(period_text, frequency));
    return rcpp_result_gen;
END_RCPP
}
// parse_period_range
NumericVector parse_period_range(const std::string& period_text, double frequency);
RcppExport SEXP regts_parse_period_range(SEXP period_textSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type period_text(period_textSEXP);
    Rcpp::traits::input_parameter< double >::type frequency(frequencySEXP);
    rcpp_result_gen = Rcpp::wrap(parse_period_range(period_text, frequency));
    return rcpp_result_gen;
END_RCPP
}
// is_period_text_
LogicalVector is_period_text_(std::vector<std::string> strings, const double given_freq);
RcppExport SEXP regts_is_period_text_(SEXP stringsSEXP, SEXP given_freqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< const double >::type given_freq(given_freqSEXP);
    rcpp_result_gen = Rcpp::wrap(is_period_text_(strings, given_freq));
    return rcpp_result_gen;
END_RCPP
}
// get_period_range
NumericVector get_period_range(const SEXP& x);
RcppExport SEXP regts_get_period_range(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_period_range(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"regts_agg_gr", (DL_FUNC) &regts_agg_gr, 3},
    {"regts_parse_period", (DL_FUNC) &regts_parse_period, 2},
    {"regts_parse_period_range", (DL_FUNC) &regts_parse_period_range, 2},
    {"regts_is_period_text_", (DL_FUNC) &regts_is_period_text_, 2},
    {"regts_get_period_range", (DL_FUNC) &regts_get_period_range, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_regts(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
