# Lean 4 Formalization of JSP-000320: Divisors of Binomial Coefficients

Formal verification of the resolution of Erdős's conjecture on divisors of binomial coefficients (JSP-000320 in The Justin Sun Prize awards catalog).

## Problem Description
"Must a binomial coefficient have a divisor close in size to its upper parameter?"

- **Status**: Solved
- **References**:
  - A. Schinzel, *Sur un problème de P. Erdős*, Colloq. Math. 5 (1958), 198–204.
  - R. K. Guy, *Unsolved problems in number theory*, Problem B34 (2004).
  - P. Erdős, *On prime factors of binomial coefficients. II*, Mat. Lapok (1978/82), 307–316.
  - M. Faulkner, *On a theorem of Sylvester and Schur*, J. London Math. Soc. (1966), 107–110.
  - H. M. Bui, S. Naprienko, K. Pratt, A. Zaharescu, *Binomial coefficients with divisors avoiding an interval*, arXiv:2605.21221 (2026).

## Formalization Highlights
This repository contains a complete, standalone Lean 4 formalization with **zero external dependencies**:
- Exact formal computation of $\binom{99215}{15}$.
- Rigorous kernel verification that for every integer $d \in (99200, 99215]$, $d$ does not divide $\binom{99215}{15}$.
- Refutes the conjecture of Erdős that $\binom{n}{k}$ must always possess a divisor in $(n - k, n]$.
- Verified with 0 `sorry`, 0 `admit`, relying only on standard Lean kernel axioms `[propext, Quot.sound]`.

## Verification Instructions
```bash
lake build
```

## Contributors
Formalization contributor: **赵钦 (Qin Zhao, [@Drag0ndddd1118](https://github.com/Drag0ndddd1118))**
