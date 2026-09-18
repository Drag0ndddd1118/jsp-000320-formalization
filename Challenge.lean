/-
  The Justin Sun Prize (孙宇晨奖) — JSP-000320

  **Challenge.lean: the statement of record.**

  This file declares the definitions the problem is phrased with, and the proposition
  `jsp000320Statement`. It proves nothing. `Submission.lean` imports this file, so the proof and the
  statement refer to the *same* constant and the statement cannot drift between them.
  `check.py` type-checks the bridge

      example : jsp000320Statement := schinzel_counterexample

  and audits the axioms the submitted proof depends on. A reviewer has only to read this
  file in order to judge *what* has been claimed.
-/



/-- Falling factorial n * (n - 1) * ... * (n - k + 1). -/
def fallingFactorial (n : Nat) : Nat → Nat
  | 0 => 1
  | k + 1 => (n - k) * fallingFactorial n k
/-- Factorial k!. -/
def factorial : Nat → Nat
  | 0 => 1
  | k + 1 => (k + 1) * factorial k
/-- Binomial coefficient C(n, k) defined by the falling factorial formula. -/
def binom (n k : Nat) : Nat :=
  fallingFactorial n k / factorial k

/-- **Statement of record for JSP-000320.** -/
def jsp000320Statement : Prop :=
  ∀ d : Nat, 99200 < d → d ≤ 99215 → ¬ (d ∣ binom 99215 15)
