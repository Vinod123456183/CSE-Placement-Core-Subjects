![Img](img.png)

---

# 🟢 EASY (Basic Ranking Functions) — 10 Questions

1. Assign a **row number** to each order based on `order_date`.
2. Rank employees based on salary in descending order.
3. Assign a **dense rank** to products based on price.
4. Rank customers based on the total number of orders they placed.
5. Number orders **per customer** using `ROW_NUMBER()`.
6. Find **top 1 product per category** using rank.
7. Rank employees within each department based on salary.
8. Number products **within each supplier** using `ROW_NUMBER()`.
9. Rank orders for each customer by amount, highest first.
10. Assign ranks to archived orders based on `order_date`.

---

# 🟡 MEDIUM (Intermediate Ranking — Multiple Partitions) — 10 Questions

11. Find **top 3 employees** per department based on handled order amount.
12. Rank customers based on total spending in **each city**.
13. Assign dense rank to products **within each category** by price.
14. Find **second highest paid employee** in each department.
15. Rank orders per month based on order amount.
16. Find top 5 products per category based on quantity sold.
17. Rank archived orders **per customer** by delivery date.
18. Assign percentile rank to employees by salary.
19. Rank customers based on number of orders **excluding customers with 0 orders**.
20. Rank products based on total revenue generated, **within each category**.

---

# 🔴 HARD (Advanced Ranking & Industry Scenarios) — 10 Questions

21. Find top 3 customers with the **highest total spending** including archived orders.
22. Assign **CUME_DIST** for each employee’s salary in the company.
23. Find the rank of each order compared to all orders in the same month.
24. Rank employees per department, **skip tied ranks** using `RANK()`.
25. Show the **top 10% customers** based on total orders using percentile functions.
26. Identify employees whose rank **changes** between current and archived orders.
27. Rank products based on total quantity sold, **show cumulative percentage contribution**.
28. Find **customers with orders above average** and rank them per city.
29. Rank products based on revenue, but break ties using product name.
30. Create a report of **top 3 highest orders per customer**, including employee info, using ranking functions.

---

## ✅ COMMON WINDOW RANKING FUNCTIONS

| Function                     | Use Case                                |
| ---------------------------- | --------------------------------------- |
| `ROW_NUMBER()`               | Sequential numbering per partition      |
| `RANK()`                     | Rank with gaps for ties                 |
| `DENSE_RANK()`               | Rank without gaps                       |
| `NTILE(n)`                   | Divide rows into n buckets (percentile) |
| `CUME_DIST()`                | Cumulative distribution                 |
| `PERCENT_RANK()`             | Percentile rank                         |
| `FIRST_VALUE()/LAST_VALUE()` | Identify first/last in window           |

---

## ✅ PRACTICE TIPS

* Always **define PARTITION BY** for grouping before ranking.
* Use **ORDER BY** carefully inside window function.
* Remember: `ROW_NUMBER()` **does not skip ties**, `RANK()` **skips ranks for ties**, `DENSE_RANK()` **doesn’t skip ranks**.
* Use **subqueries** if you want to filter top N rows per group.
* Great for **leaderboards, top-N reports, percentile reports, and trend analysis**.

---

