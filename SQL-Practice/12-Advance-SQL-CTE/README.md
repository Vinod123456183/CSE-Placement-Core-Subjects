![Img](img.png)
---

# 🟢 EASY (Basic Subqueries) — 10 Questions

1. List all customers who have placed **at least one order**.
2. Find products that have **never been ordered**.
3. List employees who handled orders with **amount greater than the average order amount**.
4. Show orders where the **product price is higher than the average product price**.
5. Find customers whose city is the same as **any employee’s city**.
6. Display employees who earn **more than the minimum salary** in their department.
7. Show customers who placed orders that are **higher than the average order amount of all orders**.
8. List products whose stock is less than the **average stock**.
9. Find employees who handled orders in the **last 7 days** using a subquery to get recent dates.
10. Find customers who **do not have any archived orders**.

---

# 🟡 MEDIUM (Correlated Subqueries & Nested Queries) — 10 Questions

11. Find employees whose salary is **higher than the average salary of their department**.
12. List orders where the **order amount is higher than the customer’s average order amount**.
13. Show products that are priced **higher than the average price in their category**.
14. List customers who placed **more orders than the average customer**.
15. Find employees who handled **more orders than the department average**.
16. Show orders whose amount is **greater than the maximum order amount of the previous month**.
17. List customers whose **last order amount** is higher than their **first order amount**.
18. Find products that are sold **more than 50% of the average quantity sold**.
19. Display orders where the **employee handling it earned more than the average salary of employees in that city**.
20. Find customers who placed orders **equal to the maximum order amount in the orders table**.

---

# 🔴 HARD (Advanced, Multi-Level & Complex Subqueries) — 10 Questions

21. Find top 3 customers by **total order amount** using a subquery for ranking.
22. Find employees who handled **all orders above 10,000** (use `NOT EXISTS`).
23. Show products that **all customers in a specific city have ordered** (use `ALL/ANY`).
24. Find orders where **product price is higher than any other product in the same category**.
25. List employees who handled orders **higher than the maximum order in another department**.
26. Find customers whose total orders **exceed the average total orders across all customers**.
27. Show orders where **customer has placed more than 3 orders** using a subquery.
28. List products that are **not included in any archived orders** using `NOT EXISTS`.
29. Show employees whose **last 3 orders handled** are higher than the average of **all employees**.
30. Find customers whose **most expensive order is cheaper than the cheapest order of a top-spending customer**.

---

## ✅ COMMON TYPES OF SUBQUERIES

| Type                     | Use Case                                    |
| ------------------------ | ------------------------------------------- |
| **Scalar Subquery**      | Returns a single value (e.g., average, max) |
| **Column/Subquery**      | Returns a single column                     |
| **Row Subquery**         | Returns multiple columns for comparison     |
| **Correlated Subquery**  | References outer query for each row         |
| **Nested / Multi-Level** | Subquery inside another subquery            |
| **EXISTS / NOT EXISTS**  | Check existence or absence of rows          |
| **ANY / ALL**            | Compare with multiple values                |

---

## ✅ PRACTICE TIPS

* Start with **scalar subqueries** for simple comparisons.
* Use **correlated subqueries** carefully—they run per row.
* Use **EXISTS / NOT EXISTS** for “all/any” type checks.
* Combine with **joins** if subquery becomes too slow.
* Always **validate small datasets** before applying to full table.
* Be careful with **NULLs** in subqueries; they can change results.

---



==============================================CTES==================================================

---

# 🟢 EASY (CTE & CTAS Basics) — 8 Questions

**CTE (Common Table Expressions)**

1. Create a CTE that lists all customers from `'Delhi'`.
2. Create a CTE that shows all products with price > 500.
3. Create a CTE to list employees in the `'Sales'` department.
4. Use a CTE to show customers who placed orders greater than the average order amount.

**CTAS (Create Table As Select)**

5. Create a new table `high_value_orders` containing orders with amount > 10,000.
6. Create a table `top_products` for products sold more than 50 units.
7. Create a table `customer_summary` with customer id, name, and total orders.
8. Create a table `employee_salary_info` with employee id, name, and salary > 50,000.

---

# 🟡 MEDIUM (Triggers & Basic Procedures) — 8 Questions

**Triggers**

9. Create a trigger to **update `last_order_date`** in `customers` whenever a new order is inserted.
10. Create a trigger to **prevent inserting orders** with negative amount.
11. Create a trigger to **log deleted products** into `product_archive` table.
12. Create a trigger to **update stock** in `products` when a new order is placed.

**Stored Procedures**

13. Write a procedure `get_customer_orders` that takes `customer_id` and returns all their orders.
14. Write a procedure `update_product_price` to increase price by a given percentage for a category.
15. Write a procedure `delete_archived_orders` older than a given date.
16. Write a procedure `employee_bonus` that calculates bonus as 10% of salary for employees earning less than 50,000.

---

# 🔴 HARD (Advanced CTE, Triggers & Procedures) — 14 Questions

**CTE Advanced**

17. Create a recursive CTE to show employees and their **manager hierarchy**.
18. Use a CTE to calculate **running total of orders per customer**.
19. Create a CTE to find the **top 3 products** per category by revenue.
20. Use a CTE to find customers who placed **orders in both current and archived orders**.

**CTAS Advanced**

21. Create a table `customer_order_summary` with total orders, total amount, and last order date.
22. Create a table `employee_order_stats` with total orders handled and average order amount.
23. Create a table `monthly_revenue` with month, total orders, total revenue.
24. Create a table `product_sales_rank` with products ranked by revenue per category.

**Advanced Triggers**

25. Create a trigger to **prevent inserting orders** if stock is insufficient.
26. Create a trigger to **update product category** in related tables when category changes.
27. Create a trigger to **auto-archive orders** older than a year.

**Advanced Stored Procedures**

28. Write a procedure `get_top_customers` that returns top N customers by total spending.
29. Write a procedure `adjust_prices` to increase/decrease product prices based on stock levels.
30. Write a procedure `monthly_sales_report` that generates total revenue per product category and inserts it into a summary table.

---

## ✅ KEY CONCEPTS & TIPS

**CTE**

* Temporary result set usable in SELECT, INSERT, UPDATE, DELETE.
* Can be **recursive**.
* Improves readability for complex queries.

**CTAS**

* Quickly create a new table from a query.
* Can be used to **materialize aggregated data**.

**Triggers**

* Fire automatically on **INSERT/UPDATE/DELETE**.
* Useful for **data integrity, auditing, automatic updates**.
* Beware of **recursive triggers** and **performance impact**.

**Stored Procedures**

* Encapsulate SQL logic, reusable and parameterized.
* Can include **control flow**: IF, LOOP, WHILE, etc.
* Useful for **complex business logic, reports, batch processing**.

---

