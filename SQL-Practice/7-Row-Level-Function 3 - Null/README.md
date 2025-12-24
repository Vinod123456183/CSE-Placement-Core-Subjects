**!\[img](img.png)**



**---**



**# 🟢 EASY (Basic NULL Handling) — 6 Questions**



**1. Replace NULL in customer phone number with `'Not Provided'`.**

**2. Replace NULL in product description with `'No Description'`.**

**3. Show employees’ bonus; if NULL, display `0`.**

**4. Find orders where discount is NULL.**

**5. Replace NULL in city column with `'Unknown'`.**

**6. Display order comments; if NULL, show `'No Comments'`.**



**---**



**# 🟡 MEDIUM (Conditional NULL Handling) — 6 Questions**



**7. Count orders where delivery date is NULL.**

**8. Show customers’ email; if NULL, display `'Missing Email'`, otherwise display actual email.**

**9. Replace NULL product prices with average price of that category.**

**10. Show employee middle name; if NULL, display first letter of last name.**

**11. Update orders table to replace NULL order status with `'Pending'`.**

**12. Find employees whose manager ID is NULL (top-level managers).**



**---**



**# 🔴 HARD (Advanced NULL Handling \& Combinations) — 6 Questions**



**13. Show customers’ phone numbers; mask if NULL as `'XXX-XXXX'`.**

**14. Combine customer first name and last name; if any part is NULL, replace with `'Unknown'`.**

**15. Calculate total order amount; if any component is NULL, treat it as 0.**

**16. Find orders where either product\_id or customer\_id is NULL.**

**17. Create a column to show `'Complete'` if all required fields are not NULL, else `'Incomplete'`.**

**18. Replace NULL in archived orders’ delivery date with original order delivery date from `orders`.**



**---**



**## ✅ COMMON ROW-LEVEL NULL FUNCTIONS**



**| Function                                      | Example Use                          |**

**| --------------------------------------------- | ------------------------------------ |**

**| `COALESCE(col, value)`                        | Return first non-NULL value          |**

**| `IFNULL(col, value)`                          | Return alternative if NULL (MySQL)   |**

**| `NVL(col, value)`                             | Oracle equivalent of COALESCE        |**

**| `NULLIF(expr1, expr2)`                        | Return NULL if values are equal      |**

**| `ISNULL(col)`                                 | Check if column is NULL (SQL Server) |**

**| `CASE WHEN col IS NULL THEN ... ELSE ... END` | Conditional replacement              |**



**---**



**## ✅ PRACTICE TIPS**



**\* Always check for \*\*NULLs before calculations\*\*.**

**\* Combine `COALESCE` with \*\*arithmetic\*\* and \*\*string functions\*\*.**

**\* Use NULL handling in \*\*reporting and ETL\*\* to avoid wrong totals.**

**\* Test \*\*edge cases\*\* where all columns may be NULL.**

**\* In joins, remember \*\*LEFT JOIN can introduce NULLs\*\* in right table columns.**



**---**



