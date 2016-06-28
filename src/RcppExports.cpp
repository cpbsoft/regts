// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// agg_gr
NumericMatrix agg_gr(NumericMatrix& ts_old, const int freq_new, const std::string& method);
RcppExport SEXP regts_agg_gr(SEXP ts_oldSEXP, SEXP freq_newSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix& >::type ts_old(ts_oldSEXP);
    Rcpp::traits::input_parameter< const int >::type freq_new(freq_newSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    __result = Rcpp::wrap(agg_gr(ts_old, freq_new, method));
    return __result;
END_RCPP
}
// parse_period
NumericVector parse_period(const std::string& period_text, double frequency);
RcppExport SEXP regts_parse_period(SEXP period_textSEXP, SEXP frequencySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type period_text(period_textSEXP);
    Rcpp::traits::input_parameter< double >::type frequency(frequencySEXP);
    __result = Rcpp::wrap(parse_period(period_text, frequency));
    return __result;
END_RCPP
}
