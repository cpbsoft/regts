// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// agg_gr
NumericMatrix agg_gr(NumericMatrix ts, int freq_new);
RcppExport SEXP regts_agg_gr(SEXP tsSEXP, SEXP freq_newSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type freq_new(freq_newSEXP);
    __result = Rcpp::wrap(agg_gr(ts, freq_new));
    return __result;
END_RCPP
}
