# Custom-Encryption-Algorithm-Project-

CascadeCipher is a hybrid symmetric encryption algorithm that blends block cipher techniques with dynamic key transformation. It is designed for secure data transmission in resource-constrained environments, offering strong confidentiality while maintaining performance efficiency.

🔄 Key Features
Multi-layered Encryption: Each block of data passes through three encryption stages, each with its own evolving subkey.

Key Evolution Function: Initial key material undergoes iterative hashing and transformation to generate stage-specific subkeys.

Pseudo-Random Substitution Boxes (S-Boxes): Dynamically generated S-boxes based on input entropy, ensuring unpredictability.

Block Chaining Technique: Incorporates ciphertext feedback into subsequent blocks (like CBC), with an adaptive initialization vector.

Lightweight Padding Scheme: Optimized padding for minimal overhead and maximum compatibility.
