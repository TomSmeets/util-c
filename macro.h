#pragma once

// token pasting madness
#define STATIC_ASSERT4(COND,MSG) typedef char static_assertion_##MSG[(!!(COND))*2-1]
#define STATIC_ASSERT3(X,L) STATIC_ASSERT4(X,static_assertion_at_line_##L)
#define STATIC_ASSERT2(X,L) STATIC_ASSERT3(X,L)
#define STATIC_ASSERT(X)    STATIC_ASSERT2(X, __COUNTER__)

#define _packed __attribute__((packed))
#define private static;
