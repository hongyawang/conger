/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : CongerCQL.g
 *     -                            On : 2012-10-01 20:44:17
 *     -                for the parser : CongerCQLParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
CongerCQLParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pCongerCQLParser, which is returned from a call to CongerCQLParserNew().
 *
 * The methods in pCongerCQLParser are  as follows:
 *
 *  - 
 CongerCQLParser_statement_return
      pCongerCQLParser->statement(pCongerCQLParser)
 *  - 
 CongerCQLParser_query_return
      pCongerCQLParser->query(pCongerCQLParser)
 *  - 
 CongerCQLParser_binary_return
      pCongerCQLParser->binary(pCongerCQLParser)
 *  - 
 CongerCQLParser_binary_operator_return
      pCongerCQLParser->binary_operator(pCongerCQLParser)
 *  - 
 CongerCQLParser_sfw_block_return
      pCongerCQLParser->sfw_block(pCongerCQLParser)
 *  - 
 CongerCQLParser_select_clause_return
      pCongerCQLParser->select_clause(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_projterm_list_return
      pCongerCQLParser->non_mt_projterm_list(pCongerCQLParser)
 *  - 
 CongerCQLParser_projterm_return
      pCongerCQLParser->projterm(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_return
      pCongerCQLParser->arith_expr(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_plus_minus_return
      pCongerCQLParser->arith_expr_plus_minus(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_star_div_return
      pCongerCQLParser->arith_expr_star_div(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_operator_star_div_return
      pCongerCQLParser->arith_expr_operator_star_div(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_operator_plus_minus_return
      pCongerCQLParser->arith_expr_operator_plus_minus(pCongerCQLParser)
 *  - 
 CongerCQLParser_arith_expr_main_return
      pCongerCQLParser->arith_expr_main(pCongerCQLParser)
 *  - 
 CongerCQLParser_opt_where_clause_return
      pCongerCQLParser->opt_where_clause(pCongerCQLParser)
 *  - 
 CongerCQLParser_opt_having_clause_return
      pCongerCQLParser->opt_having_clause(pCongerCQLParser)
 *  - 
 CongerCQLParser_opt_group_by_clause_return
      pCongerCQLParser->opt_group_by_clause(pCongerCQLParser)
 *  - 
 CongerCQLParser_from_clause_return
      pCongerCQLParser->from_clause(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_cond_list_return
      pCongerCQLParser->non_mt_cond_list(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_or_cond_return
      pCongerCQLParser->non_mt_or_cond(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_and_cond_return
      pCongerCQLParser->non_mt_and_cond(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_not_cond_return
      pCongerCQLParser->non_mt_not_cond(pCongerCQLParser)
 *  - 
 CongerCQLParser_unary_condition_return
      pCongerCQLParser->unary_condition(pCongerCQLParser)
 *  - 
 CongerCQLParser_between_condition_right_return
      pCongerCQLParser->between_condition_right(pCongerCQLParser)
 *  - 
 CongerCQLParser_compare_condition_right_return
      pCongerCQLParser->compare_condition_right(pCongerCQLParser)
 *  - 
 CongerCQLParser_unary_condition_operator_return
      pCongerCQLParser->unary_condition_operator(pCongerCQLParser)
 *  - 
 CongerCQLParser_const_string_return
      pCongerCQLParser->const_string(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_arg_list_return
      pCongerCQLParser->non_mt_arg_list(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_relation_list_return
      pCongerCQLParser->non_mt_relation_list(pCongerCQLParser)
 *  - 
 CongerCQLParser_relation_variable_return
      pCongerCQLParser->relation_variable(pCongerCQLParser)
 *  - 
 CongerCQLParser_window_type_return
      pCongerCQLParser->window_type(pCongerCQLParser)
 *  - 
 CongerCQLParser_non_mt_attr_list_return
      pCongerCQLParser->non_mt_attr_list(pCongerCQLParser)
 *  - 
 CongerCQLParser_const_value_return
      pCongerCQLParser->const_value(pCongerCQLParser)
 *  - 
 CongerCQLParser_time_spec_return
      pCongerCQLParser->time_spec(pCongerCQLParser)
 *  - 
 CongerCQLParser_time_unit_return
      pCongerCQLParser->time_unit(pCongerCQLParser)
 *  - 
 CongerCQLParser_aggr_expr_return
      pCongerCQLParser->aggr_expr(pCongerCQLParser)
 *  - 
 CongerCQLParser_func_expr_return
      pCongerCQLParser->func_expr(pCongerCQLParser)
 *  - 
 CongerCQLParser_func_name_return
      pCongerCQLParser->func_name(pCongerCQLParser)
 *  - 
 CongerCQLParser_attr_return
      pCongerCQLParser->attr(pCongerCQLParser)
 *  - 
 CongerCQLParser_pseudo_column_return
      pCongerCQLParser->pseudo_column(pCongerCQLParser)
 *  - 
 CongerCQLParser_element_time_return
      pCongerCQLParser->element_time(pCongerCQLParser)
 *  - 
 CongerCQLParser_const_int_return
      pCongerCQLParser->const_int(pCongerCQLParser)
 *  - 
 CongerCQLParser_const_float_return
      pCongerCQLParser->const_float(pCongerCQLParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_CongerCQLParser_H
#define _CongerCQLParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct CongerCQLParser_Ctx_struct CongerCQLParser, * pCongerCQLParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct CongerCQLParser_statement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_statement_return;



typedef struct CongerCQLParser_query_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_query_return;



typedef struct CongerCQLParser_binary_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_binary_return;



typedef struct CongerCQLParser_binary_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_binary_operator_return;



typedef struct CongerCQLParser_sfw_block_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_sfw_block_return;



typedef struct CongerCQLParser_select_clause_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_select_clause_return;



typedef struct CongerCQLParser_non_mt_projterm_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_projterm_list_return;



typedef struct CongerCQLParser_projterm_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_projterm_return;



typedef struct CongerCQLParser_arith_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_return;



typedef struct CongerCQLParser_arith_expr_plus_minus_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_plus_minus_return;



typedef struct CongerCQLParser_arith_expr_star_div_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_star_div_return;



typedef struct CongerCQLParser_arith_expr_operator_star_div_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_operator_star_div_return;



typedef struct CongerCQLParser_arith_expr_operator_plus_minus_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_operator_plus_minus_return;



typedef struct CongerCQLParser_arith_expr_main_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_arith_expr_main_return;



typedef struct CongerCQLParser_opt_where_clause_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_opt_where_clause_return;



typedef struct CongerCQLParser_opt_having_clause_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_opt_having_clause_return;



typedef struct CongerCQLParser_opt_group_by_clause_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_opt_group_by_clause_return;



typedef struct CongerCQLParser_from_clause_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_from_clause_return;



typedef struct CongerCQLParser_non_mt_cond_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_cond_list_return;



typedef struct CongerCQLParser_non_mt_or_cond_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_or_cond_return;



typedef struct CongerCQLParser_non_mt_and_cond_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_and_cond_return;



typedef struct CongerCQLParser_non_mt_not_cond_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_not_cond_return;



typedef struct CongerCQLParser_unary_condition_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_unary_condition_return;



typedef struct CongerCQLParser_between_condition_right_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_between_condition_right_return;



typedef struct CongerCQLParser_compare_condition_right_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_compare_condition_right_return;



typedef struct CongerCQLParser_unary_condition_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_unary_condition_operator_return;



typedef struct CongerCQLParser_const_string_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_const_string_return;



typedef struct CongerCQLParser_non_mt_arg_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_arg_list_return;



typedef struct CongerCQLParser_non_mt_relation_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_relation_list_return;



typedef struct CongerCQLParser_relation_variable_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_relation_variable_return;



typedef struct CongerCQLParser_window_type_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_window_type_return;



typedef struct CongerCQLParser_non_mt_attr_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_non_mt_attr_list_return;



typedef struct CongerCQLParser_const_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_const_value_return;



typedef struct CongerCQLParser_time_spec_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_time_spec_return;



typedef struct CongerCQLParser_time_unit_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_time_unit_return;



typedef struct CongerCQLParser_aggr_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_aggr_expr_return;



typedef struct CongerCQLParser_func_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_func_expr_return;



typedef struct CongerCQLParser_func_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_func_name_return;



typedef struct CongerCQLParser_attr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_attr_return;



typedef struct CongerCQLParser_pseudo_column_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_pseudo_column_return;



typedef struct CongerCQLParser_element_time_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_element_time_return;



typedef struct CongerCQLParser_const_int_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_const_int_return;



typedef struct CongerCQLParser_const_float_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    CongerCQLParser_const_float_return;




/** Context tracking structure for 
CongerCQLParser

 */
struct CongerCQLParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     CongerCQLParser_statement_return
     (*statement)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_query_return
     (*query)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_binary_return
     (*binary)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_binary_operator_return
     (*binary_operator)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_sfw_block_return
     (*sfw_block)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_select_clause_return
     (*select_clause)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_projterm_list_return
     (*non_mt_projterm_list)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_projterm_return
     (*projterm)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_return
     (*arith_expr)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_plus_minus_return
     (*arith_expr_plus_minus)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_star_div_return
     (*arith_expr_star_div)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_operator_star_div_return
     (*arith_expr_operator_star_div)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_operator_plus_minus_return
     (*arith_expr_operator_plus_minus)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_arith_expr_main_return
     (*arith_expr_main)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_opt_where_clause_return
     (*opt_where_clause)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_opt_having_clause_return
     (*opt_having_clause)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_opt_group_by_clause_return
     (*opt_group_by_clause)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_from_clause_return
     (*from_clause)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_cond_list_return
     (*non_mt_cond_list)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_or_cond_return
     (*non_mt_or_cond)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_and_cond_return
     (*non_mt_and_cond)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_not_cond_return
     (*non_mt_not_cond)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_unary_condition_return
     (*unary_condition)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_between_condition_right_return
     (*between_condition_right)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_compare_condition_right_return
     (*compare_condition_right)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_unary_condition_operator_return
     (*unary_condition_operator)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_const_string_return
     (*const_string)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_arg_list_return
     (*non_mt_arg_list)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_relation_list_return
     (*non_mt_relation_list)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_relation_variable_return
     (*relation_variable)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_window_type_return
     (*window_type)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_non_mt_attr_list_return
     (*non_mt_attr_list)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_const_value_return
     (*const_value)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_time_spec_return
     (*time_spec)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_time_unit_return
     (*time_unit)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_aggr_expr_return
     (*aggr_expr)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_func_expr_return
     (*func_expr)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_func_name_return
     (*func_name)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_attr_return
     (*attr)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_pseudo_column_return
     (*pseudo_column)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_element_time_return
     (*element_time)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_const_int_return
     (*const_int)	(struct CongerCQLParser_Ctx_struct * ctx);

     CongerCQLParser_const_float_return
     (*const_float)	(struct CongerCQLParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct CongerCQLParser_Ctx_struct * ctx);
    void	    (*free)   (struct CongerCQLParser_Ctx_struct * ctx);
/* @headerFile.members() */
pANTLR3_BASE_TREE_ADAPTOR	adaptor;
pANTLR3_VECTOR_FACTORY		vectors;
/* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pCongerCQLParser CongerCQLParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pCongerCQLParser CongerCQLParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define AMPERSAND      4
#define BITWISEOR      5
#define BITWISEXOR      6
#define COLON      7
#define COMMA      8
#define COMMENT      9
#define CONCATENATE      10
#define CharSetLiteral      11
#define CharSetName      12
#define DIV      13
#define DIVIDE      14
#define DOLLAR      15
#define DOT      16
#define Digit      17
#define EQUAL      18
#define Exponent      19
#define GREATERTHAN      20
#define GREATERTHANOREQUALTO      21
#define HexDigit      22
#define Identifier      23
#define Integer      24
#define KW_AFTER      25
#define KW_ALL      26
#define KW_AND      27
#define KW_AS      28
#define KW_ASC      29
#define KW_AVG      30
#define KW_BEFORE      31
#define KW_BETWEEN      32
#define KW_BIGINT      33
#define KW_BINARY      34
#define KW_BOOLEAN      35
#define KW_BOTH      36
#define KW_BY      37
#define KW_COLUMN      38
#define KW_COMMENT      39
#define KW_COUNT      40
#define KW_CREATE      41
#define KW_CROSS      42
#define KW_DATE      43
#define KW_DATETIME      44
#define KW_DAY      45
#define KW_DAYS      46
#define KW_DECODE      47
#define KW_DEFAULT      48
#define KW_DESC      49
#define KW_DESCRIBE      50
#define KW_DIFFERENCE      51
#define KW_DISTINCT      52
#define KW_DOUBLE      53
#define KW_DSTREAM      54
#define KW_ELEMENT_TIME      55
#define KW_EXCEPT      56
#define KW_EXISTS      57
#define KW_FALSE      58
#define KW_FIRST      59
#define KW_FLOAT      60
#define KW_FROM      61
#define KW_FULL      62
#define KW_GROUP      63
#define KW_HAVING      64
#define KW_HOUR      65
#define KW_HOURS      66
#define KW_IF      67
#define KW_IN      68
#define KW_INT      69
#define KW_INTERSECT      70
#define KW_INTERVAL      71
#define KW_INTO      72
#define KW_IS      73
#define KW_ISTREAM      74
#define KW_JOIN      75
#define KW_LAST      76
#define KW_LEFT      77
#define KW_LIKE      78
#define KW_LIMIT      79
#define KW_LONG      80
#define KW_MAX      81
#define KW_MICROSECOND      82
#define KW_MICROSECONDS      83
#define KW_MILLISECOND      84
#define KW_MILLISECONDS      85
#define KW_MIN      86
#define KW_MINUS      87
#define KW_MINUTE      88
#define KW_MINUTES      89
#define KW_NANOSECOND      90
#define KW_NANOSECONDS      91
#define KW_NOT      92
#define KW_NOW      93
#define KW_NULL      94
#define KW_NULLS      95
#define KW_OF      96
#define KW_ON      97
#define KW_OR      98
#define KW_ORDER      99
#define KW_OUT      100
#define KW_OUTER      101
#define KW_OVER      102
#define KW_PARTITION      103
#define KW_PASSING      104
#define KW_PLUS      105
#define KW_RANGE      106
#define KW_RIGHT      107
#define KW_ROW      108
#define KW_ROWS      109
#define KW_RSTREAM      110
#define KW_SECOND      111
#define KW_SECONDS      112
#define KW_SELECT      113
#define KW_SET      114
#define KW_SLIDE      115
#define KW_SUM      116
#define KW_TIMEOUT      117
#define KW_TO      118
#define KW_TRUE      119
#define KW_UNBOUNDED      120
#define KW_UNION      121
#define KW_UPDATE      122
#define KW_USE      123
#define KW_USING      124
#define KW_VALUE      125
#define KW_VIEW      126
#define KW_WHERE      127
#define KW_WITH      128
#define KW_XOR      129
#define LCURLY      130
#define LESSTHAN      131
#define LESSTHANOREQUALTO      132
#define LPAREN      133
#define LSQUARE      134
#define Letter      135
#define MINUS      136
#define MOD      137
#define NOTEQUAL      138
#define Number      139
#define PLUS      140
#define QUESTION      141
#define RCURLY      142
#define RPAREN      143
#define RSQUARE      144
#define RegexComponent      145
#define SEMICOLON      146
#define STAR      147
#define StringLiteral      148
#define TILDE      149
#define TOK_AGGR      150
#define TOK_AGGR_EXPR      151
#define TOK_ARG_LIST      152
#define TOK_ARITH_EXPR      153
#define TOK_ATTR_LIST      154
#define TOK_BETWEEN      155
#define TOK_BINARY      156
#define TOK_COMPARE      157
#define TOK_COND      158
#define TOK_COND_LIST      159
#define TOK_FROM      160
#define TOK_FUNC      161
#define TOK_GROUP_BY      162
#define TOK_HAVING      163
#define TOK_JOIN      164
#define TOK_PROJTERM      165
#define TOK_PROJTERM_LIST      166
#define TOK_QUERY      167
#define TOK_RELATION_LIST      168
#define TOK_RELATION_VARIABLE      169
#define TOK_SELECT      170
#define TOK_SFW      171
#define TOK_UNARY_COND      172
#define TOK_USING      173
#define TOK_WHERE      174
#define TOK_WINDOW      175
#define WS      176
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for CongerCQLParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
