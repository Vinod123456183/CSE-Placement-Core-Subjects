**!\[img](img.png)**





**# 🟢 BASIC JOINS (INNER, LEFT, RIGHT, FULL) — 12 Questions**



**\*\*1–4: INNER JOIN\*\***



**1. List all orders with the corresponding customer names.**

**2. Show products along with the orders in which they were purchased.**

**3. Display employees and the orders they handled (only employees with orders).**

**4. Find customers and their last order details (ignore customers without orders).**



**\*\*5–6: LEFT JOIN\*\***

**5. List all customers and their orders (include customers with no orders).**

**6. Show all products and orders, even if some products have never been ordered.**



**\*\*7–8: RIGHT JOIN\*\***

**7. List all orders and the employee handling them (include orders even if employee is missing).**

**8. Show all order records and their product details (include orders without products).**



**\*\*9–10: FULL OUTER JOIN\*\***

**9. Display all employees and orders they handled (include employees with no orders and orders with no employees).**

**10. Show all products and orders in the archive (include products that were never ordered and orders for discontinued products).**



**\*\*11–12: CROSS JOIN\*\***

**11. Create a report showing all combinations of products and customers (for hypothetical analysis).**

**12. List all employees with all departments (to simulate potential transfers).**



**---**



**# 🟡 INTERMEDIATE JOINS (LEFT ANTI, RIGHT ANTI, FULL ANTI) — 6 Questions**



**\*\*13–14: LEFT ANTI JOIN\*\***

**13. Find customers who have never placed an order.**

**14. List products that have never been ordered.**



**\*\*15–16: RIGHT ANTI JOIN\*\***

**15. Find orders that do not have a matching product in the `products` table.**

**16. List archived orders that do not have a corresponding customer record.**



**\*\*17–18: FULL ANTI JOIN\*\***

**17. Find mismatched data between `orders` and `order\_archive`.**

**18. List all customers and orders where no match exists between the two tables.**



**---**



**# 🔴 ADVANCED JOINS \& MULTI-TABLE JOINS — 12 Questions**



**\*\*19–21: Joining Multiple Tables\*\***

**19. Show customer name, order date, product name, and price for all orders.**

**20. List employees, the orders they handled, customer names, and product categories.**

**21. Find top 5 customers who spent the most, including employee who handled the order and product details.**



**\*\*22–24: Self-Join / Hierarchical Joins\*\***

**22. Find employees whose salary is higher than other employees in the same department.**

**23. Find products that have a higher price than another product in the same category.**

**24. List orders placed on the same day by the same customer.**



**\*\*25–27: Advanced Analytical Joins\*\***

**25. Find customers who reordered the same product within 6 months.**

**26. Show employees and their total orders along with the average order value per employee.**

**27. List products with total quantity sold, total revenue, and remaining stock.**



**\*\*28–30: Choosing the Right Join / Complex Scenarios\*\***

**28. Identify all customers who ordered products that are currently discontinued (LEFT JOIN vs INNER JOIN scenario).**

**29. Show all employees and orders including cases where order details or product info is missing (FULL OUTER JOIN scenario).**

**30. Generate a comprehensive sales report with customers, orders, products, employees, and archived orders (combination of INNER, LEFT, and RIGHT joins).**



**---**



**## ✅ JOIN PRACTICE TIPS**



**\* \*\*INNER JOIN:\*\* Use when you need only matching records.**

**\* \*\*LEFT JOIN:\*\* Include all rows from the left table even if no match exists.**

**\* \*\*RIGHT JOIN:\*\* Include all rows from the right table even if no match exists.**

**\* \*\*FULL OUTER JOIN:\*\* Include all rows from both tables.**

**\* \*\*ANTI JOINS:\*\* Find rows with no matching counterpart.**

**\* \*\*CROSS JOIN:\*\* For all combinations (careful, can explode data).**

**\* \*\*Multiple Tables:\*\* Join step-by-step, always validate row counts.**

**\* \*\*Performance Tip:\*\* Filter first, then join large tables.**

**\* \*\*Debugging:\*\* Always check results with small datasets.**



**---**

