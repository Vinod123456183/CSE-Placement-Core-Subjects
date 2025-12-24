**!\[img](img.png)**





**---**



**# 🟢 EASY (Basic Aggregates) — 8 Questions**



**1. Count the total number of customers.**

**2. Count the number of distinct products.**

**3. Find the maximum product price.**

**4. Find the minimum order amount.**

**5. Calculate the total quantity of products ordered.**

**6. Find the average employee salary.**

**7. Count the number of orders placed by each customer (grouped).**

**8. Find the total revenue from orders in the current month.**



**---**



**# 🟡 MEDIUM (GROUP BY \& HAVING) — 8 Questions**



**9. Find the total sales per product.**

**10. Find the average order amount per customer.**

**11. Count how many orders each employee handled.**

**12. Find the highest order amount per customer.**

**13. Find products with total sold quantity greater than 100.**

**14. Find employees whose total handled order amount is above 50,000.**

**15. Count customers from each city.**

**16. Calculate average product price per category and show categories with average price above 500.**



**---**



**# 🔴 HARD (Advanced Aggregates \& Complex Scenarios) — 8 Questions**



**17. Find the top 3 customers with the highest total order amount.**

**18. Find products contributing to more than 20% of total sales.**

**19. Calculate cumulative order amount per customer (running total).**

**20. Find average order amount per month.**

**21. Find the median order amount per product (if your DB supports).**

**22. Calculate the percentage of orders handled by each employee.**

**23. Find the difference between maximum and minimum order amounts per customer.**

**24. Show total revenue per customer including archived orders.**



**---**



**## ✅ COMMON AGGREGATE FUNCTIONS**



**| Function          | Example Use                                 |**

**| ----------------- | ------------------------------------------- |**

**| `COUNT()`         | Count rows or distinct values               |**

**| `SUM()`           | Total of a numeric column                   |**

**| `AVG()`           | Average value                               |**

**| `MAX()`           | Maximum value                               |**

**| `MIN()`           | Minimum value                               |**

**| `GROUP BY`        | Aggregate per group                         |**

**| `HAVING`          | Filter aggregated groups                    |**

**| `ROLLUP` / `CUBE` | Advanced multi-level aggregation (optional) |**



**---**



**## ✅ PRACTICE TIPS**



**\* Always \*\*use GROUP BY\*\* when aggregating per group.**

**\* Use \*\*HAVING\*\* to filter aggregates (cannot use WHERE for aggregates).**

**\* Test \*\*NULL values\*\*: SUM/AVG ignores NULLs.**

**\* Combine \*\*JOIN + aggregation\*\* carefully to avoid double counting.**

**\* For complex aggregates, try \*\*window functions\*\* for running totals or percentages.**



**---**



