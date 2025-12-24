**!\[img](img.png)**





**# 🟢 EASY (6 Questions) — UNION \& UNION ALL**



**1. List all customer names from `customers` and `order\_archive`.**

**2. Combine the list of product names from `products` and products present in `orders`.**

**3. Show all employees from the `employees` table and employees who handled archived orders.**

**4. List all cities from `customers` and `employees` without duplicates (use `UNION`).**

**5. List all cities from `customers` and `employees` including duplicates (use `UNION ALL`).**

**6. Combine all order IDs from `orders` and `order\_archive` (no duplicates).**



**---**



**# 🟡 MEDIUM (6 Questions) — INTERSECT**



**7. Find customers who have placed orders in both `orders` and `order\_archive`.**

**8. Show products that exist in both `orders` and `order\_archive`.**

**9. Find employees who handled orders in both current and archived orders.**

**10. Find customers who are both from `Delhi` and have placed an order.**

**11. Find product IDs that appear in both current orders and archived orders.**

**12. List cities that have both customers and employees (intersection of city lists).**



**---**



**# 🔴 HARD (6 Questions) — EXCEPT / MINUS**



**13. Find customers who \*\*never placed an order\*\* (in `customers` but not in `orders`).**

**14. List products that were \*\*never ordered\*\* (in `products` but not in `orders`).**

**15. Find employees who did not handle any orders.**

**16. Identify orders in `orders` that are not present in `order\_archive`.**

**17. List customers who placed orders in `orders` but not in `order\_archive`.**

**18. Find products that exist in `products` but were not sold yet.**



**---**



**# 🟣 ADVANCED COMBINATIONS (6 Questions)**



**19. Find customers who placed orders in `orders` or `order\_archive` but \*\*not in both\*\*.**

**20. List all products sold in `orders` or `order\_archive` without duplicates.**

**21. Find customers who placed orders in both `orders` and `order\_archive`, and are from `Mumbai`.**

**22. List employees who handled orders \*\*only in archived orders\*\*.**

**23. Combine customers from `customers` and `order\_archive`, remove duplicates, and show only those in `Delhi`.**

**24. Find products that were \*\*sold in current orders but not in archived orders\*\*.**



**---**



**## ✅ PRACTICE TIPS — SET OPERATORS**



**\* `UNION` → removes duplicates**

**\* `UNION ALL` → keeps duplicates**

**\* `INTERSECT` → returns only common rows**

**\* `EXCEPT` / `MINUS` → returns rows in first table not in second**

**\* Columns and datatypes must \*\*match\*\***

**\* Ordering: use `ORDER BY` \*\*after the last operator\*\***

**\* Set operators are perfect for \*\*reporting \& historical comparison\*\***

**\* Always \*\*test on small datasets\*\* first**





