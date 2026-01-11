# Lucky Ticket Number Counter (4-Digits)

This project implements a numerical analysis algorithm in C to solve a variation of the famous **"Lucky Ticket Problem"**. It calculates the frequency of 4-digit integers where the sum of the first two digits equals the sum of the last two.

## 🧮 Mathematical Definition

Let a 4-digit integer $N$ be represented as $d_1 d_2 d_3 d_4$.
The algorithm searches for all $N \in [1000, 9999]$ such that:

$$d_1 + d_2 = d_3 + d_4$$

### Example Case
* **Number:** 5124
* **Left Sum:** $5 + 1 = 6$
* **Right Sum:** $2 + 4 = 6$
* **Result:** ✅ Match (Counted)

## ⚙️ Algorithm Logic

1.  **Iteration:** Loops through the entire 4-digit space ($1000$ to $9999$).
2.  **Decomposition:** Uses modular arithmetic to extract digits efficiently:
    * Thousands ($d_1$) & Hundreds ($d_2$)
    * Tens ($d_3$) & Units ($d_4$)
3.  **Comparison:** Checks the equality condition.
4.  **Aggregation:** Increments a counter for every valid instance.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o lucky_counter
    ```
2.  Run the executable:
    ```bash
    ./lucky_counter
    ```
3.  **Output:** The program will print the total count of such numbers found.

---
*This repository demonstrates integer decomposition and conditional logic in C.*
