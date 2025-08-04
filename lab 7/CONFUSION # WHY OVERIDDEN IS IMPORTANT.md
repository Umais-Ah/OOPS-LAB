CONFUSION # WHY OVERIDDEN IS IMPORTANT

Mismatch in Function Signature – If a derived function has a different parameter list, it does not override the base function, leading to unintended behavior.

Shadowing Instead of Overriding – If the return type is different, the function does not override but instead creates a new function.

Unnoticed Typos – A simple typo in the function name can prevent overriding without warning.

Using override allows the compiler to catch these errors, ensuring correct function overriding and preventing unexpected behavior in polymorphic code. Always use override to avoid silent mistakes and improve code reliability. 🚀