// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parseXml
void parseXml(std::string base, std::string internal);
RcppExport SEXP readxl_parseXml(SEXP baseSEXP, SEXP internalSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type base(baseSEXP);
    Rcpp::traits::input_parameter< std::string >::type internal(internalSEXP);
    parseXml(base, internal);
    return R_NilValue;
END_RCPP
}
// countRows
int countRows(std::string base, int sheet);
RcppExport SEXP readxl_countRows(SEXP baseSEXP, SEXP sheetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type base(baseSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    rcpp_result_gen = Rcpp::wrap(countRows(base, sheet));
    return rcpp_result_gen;
END_RCPP
}
// xls_formats
std::map<int,std::string> xls_formats(std::string path);
RcppExport SEXP readxl_xls_formats(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_formats(path));
    return rcpp_result_gen;
END_RCPP
}
// xls_sheets
CharacterVector xls_sheets(std::string path);
RcppExport SEXP readxl_xls_sheets(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_sheets(path));
    return rcpp_result_gen;
END_RCPP
}
// xls_col_names
CharacterVector xls_col_names(std::string path, int i, int nskip);
RcppExport SEXP readxl_xls_col_names(SEXP pathSEXP, SEXP iSEXP, SEXP nskipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_col_names(path, i, nskip));
    return rcpp_result_gen;
END_RCPP
}
// xls_col_types
CharacterVector xls_col_types(std::string path, std::vector<std::string> na, int sheet, int nskip, int n, bool has_col_names);
RcppExport SEXP readxl_xls_col_types(SEXP pathSEXP, SEXP naSEXP, SEXP sheetSEXP, SEXP nskipSEXP, SEXP nSEXP, SEXP has_col_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type has_col_names(has_col_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_col_types(path, na, sheet, nskip, n, has_col_names));
    return rcpp_result_gen;
END_RCPP
}
// xls_cols
List xls_cols(std::string path, int i, CharacterVector col_names, CharacterVector col_types, std::vector<std::string> na, int nskip);
RcppExport SEXP readxl_xls_cols(SEXP pathSEXP, SEXP iSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP naSEXP, SEXP nskipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_cols(path, i, col_names, col_types, na, nskip));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_sheets
CharacterVector xlsx_sheets(std::string path);
RcppExport SEXP readxl_xlsx_sheets(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_sheets(path));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_strings
std::vector<std::string> xlsx_strings(std::string path);
RcppExport SEXP readxl_xlsx_strings(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_strings(path));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_date_styles
std::set<int> xlsx_date_styles(std::string path);
RcppExport SEXP readxl_xlsx_date_styles(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_date_styles(path));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_cells
void xlsx_cells(std::string path, int sheet);
RcppExport SEXP readxl_xlsx_cells(SEXP pathSEXP, SEXP sheetSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    xlsx_cells(path, sheet);
    return R_NilValue;
END_RCPP
}
// xlsx_dim
IntegerVector xlsx_dim(std::string path, int sheet);
RcppExport SEXP readxl_xlsx_dim(SEXP pathSEXP, SEXP sheetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_dim(path, sheet));
    return rcpp_result_gen;
END_RCPP
}
// parse_ref
IntegerVector parse_ref(std::string ref);
RcppExport SEXP readxl_parse_ref(SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_ref(ref));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_col_types
CharacterVector xlsx_col_types(std::string path, int sheet, CharacterVector na, int nskip, int n);
RcppExport SEXP readxl_xlsx_col_types(SEXP pathSEXP, SEXP sheetSEXP, SEXP naSEXP, SEXP nskipSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_col_types(path, sheet, na, nskip, n));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_col_names
CharacterVector xlsx_col_names(std::string path, int sheet, int nskip);
RcppExport SEXP readxl_xlsx_col_names(SEXP pathSEXP, SEXP sheetSEXP, SEXP nskipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_col_names(path, sheet, nskip));
    return rcpp_result_gen;
END_RCPP
}
// read_xlsx_
List read_xlsx_(std::string path, int sheet, RObject col_names, RObject col_types, std::vector<std::string> na, int nskip);
RcppExport SEXP readxl_read_xlsx_(SEXP pathSEXP, SEXP sheetSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP naSEXP, SEXP nskipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet(sheetSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type nskip(nskipSEXP);
    rcpp_result_gen = Rcpp::wrap(read_xlsx_(path, sheet, col_names, col_types, na, nskip));
    return rcpp_result_gen;
END_RCPP
}
// zip_xml
void zip_xml(const std::string& zip_path, const std::string& file_path);
RcppExport SEXP readxl_zip_xml(SEXP zip_pathSEXP, SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type zip_path(zip_pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    zip_xml(zip_path, file_path);
    return R_NilValue;
END_RCPP
}
