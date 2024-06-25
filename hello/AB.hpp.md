---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AB.test.cpp
    title: verify/AB.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"hello/AB.hpp\"\n\nlong long AplusB(long long a, long long\
    \ b) {\n  return a + b;\n}\n"
  code: "#pragma once\n\nlong long AplusB(long long a, long long b) {\n  return a\
    \ + b;\n}"
  dependsOn: []
  isVerificationFile: false
  path: hello/AB.hpp
  requiredBy: []
  timestamp: '2024-06-25 17:21:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AB.test.cpp
documentation_of: hello/AB.hpp
layout: document
title: A + B
---

## 概要

$A + B$ を計算する。

## 計算量
はやい