---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: hello/AB.hpp
    title: A + B
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"verify/AB.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\
    \n#line 2 \"hello/AB.hpp\"\n\nlong long AplusB(long long a, long long b) {\n \
    \ return a + b;\n}\n#line 3 \"verify/AB.test.cpp\"\n\n#include <iostream>\nusing\
    \ namespace std;\n\nint main() {\n  long long a, b;\n  cin >> a >> b;\n  cout\
    \ << AplusB(a, b) << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n#include \"../hello/AB.hpp\"\
    \n\n#include <iostream>\nusing namespace std;\n\nint main() {\n  long long a,\
    \ b;\n  cin >> a >> b;\n  cout << AplusB(a, b) << endl;\n}"
  dependsOn:
  - hello/AB.hpp
  isVerificationFile: true
  path: verify/AB.test.cpp
  requiredBy: []
  timestamp: '2024-06-25 17:21:38+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/AB.test.cpp
layout: document
redirect_from:
- /verify/verify/AB.test.cpp
- /verify/verify/AB.test.cpp.html
title: verify/AB.test.cpp
---
