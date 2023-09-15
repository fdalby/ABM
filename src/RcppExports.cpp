// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// CTM_cpp
Rcpp::NumericVector CTM_cpp(Rcpp::NumericVector tt, Rcpp::NumericVector top, Rcpp::NumericVector tmin, Rcpp::NumericVector tmax, Rcpp::NumericVector yopt);
RcppExport SEXP _ABM_CTM_cpp(SEXP ttSEXP, SEXP topSEXP, SEXP tminSEXP, SEXP tmaxSEXP, SEXP yoptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tt(ttSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type top(topSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tmin(tminSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yopt(yoptSEXP);
    rcpp_result_gen = Rcpp::wrap(CTM_cpp(tt, top, tmin, tmax, yopt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ABM_CTM_cpp", (DL_FUNC) &_ABM_CTM_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ABM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}