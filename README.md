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

## Statement of record — `Challenge.lean`

`Challenge.lean` declares the definitions the problem is phrased with and the proposition
`jsp000320Statement`. It proves nothing, so a reviewer has only to read that one file to judge *what*
has been claimed.

```lean
def jsp000320Statement : Prop :=
∀ d : Nat, 99200 < d → d ≤ 99215 → ¬ (d ∣ binom 99215 15)
```

## Proof — `Submission.lean`

`Submission.lean` imports `Challenge.lean`, so the proof and the statement refer to the *same*
`jsp000320Statement` constant and cannot drift apart. The top-level result is

```lean
schinzel_counterexample
```

`schinzel_all_nonzero` computes C(99215, 15) and shows that each of the fifteen integers 99201, ..., 99215 leaves a nonzero remainder (`no_divisor_in_interval`), whence no such integer divides the coefficient; `schinzel_counterexample` converts that into non-divisibility.

The file has no `axiom`, no `opaque`, no `sorry`, no `admit`, no `unsafe` and no `native_decide`,
and imports nothing beyond Lean 4 core. `check.py` type-checks the bridge
`example : jsp000320Statement := schinzel_counterexample` and audits `#print axioms schinzel_counterexample`.

## Build and check

```sh
lake build
python3 check.py
```

Toolchain: `leanprover/lean4:v4.34.0` (commit `293d5d0c0c3f3dded4688b3ccd6a33939ac5102b`). The development is self-contained: it
uses Lean core only and depends on no external library.
