// This file is part of covafill, a C++ template library for
// local polynomial regression of covariates in state-space models
//
// Copyright (C), Christoffer Moesgaard Albertsen <cmoe@aqua.dtu.dk>
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:

//     Redistributions of source code must retain the above copyright
//     notice, this list of conditions and the following disclaimer.

//     Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in
//     the documentation and/or other materials provided with the
//     distribution.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef _COVAFILL_MACROS_
#define _COVAFILL_MACROS_

#ifdef TMB_EXTERN

#define DEFINE_TYPES(scalartype_) \
  typedef scalartype_ scalartype; \
  typedef AD<scalartype_> ADscalartype;		    \
  typedef tmbutils::vector<scalartype_> vectortype; \
  typedef tmbutils::vector<AD<scalartype_> > ADvectortype;	\
  typedef tmbutils::vector<matrix<scalartype_> > vecmattype;	\
  typedef tmbutils::matrix<scalartype_> matrixtype;		\
  typedef tmbutils::SparseMatrix<scalartype_> sparsematrixtype; \
  typedef tmbutils::vector<vector<scalartype_> > vecvectype;

// #elseif SOMETHING_WITH_STAN


#else

#define DEFINE_TYPES(scalartype_)					\
  typedef scalartype_ scalartype;					\
  typedef Eigen::Array<scalartype_,Eigen::Dynamic,1> vectortype;	\
  typedef Eigen::Array<Eigen::Matrix<scalartype_,Eigen::Dynamic,Eigen::Dynamic>,Eigen::Dynamic,1> vecmattype; \
  typedef Eigen::Matrix<scalartype_,Eigen::Dynamic,Eigen::Dynamic> matrixtype; \
  typedef Eigen::SparseMatrix<scalartype_> sparsematrixtype; \
  typedef Eigen::Array<Eigen::Array<scalartype_,Eigen::Dynamic,1>,Eigen::Dynamic,1> vecvectype;

#endif






#endif
