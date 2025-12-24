![img](img.png)

Perfect 👍
Below are **30 industry-style SQL practice questions**, **topic-wise**, using **only your tables**:

**Tables**

* `customers`
* `employees`
* `orders`
* `order_archive`
* `products`

(Assume common columns like `id`, `customer_id`, `product_id`, `order_date`, `price`, `quantity`, `employee_id`, `department`, etc.)

---

# 🟢 EASY (10 Questions) — Basics / Filtering

**Topic: SELECT, WHERE, ORDER BY**

1. Display all records from the `customers` table.
2. Show customer name and email from `customers`.
3. List all products with price greater than 1000.
4. Find all orders placed after `2024-01-01`.
5. Display all employees who belong to the `Sales` department.
6. Fetch distinct cities from the `customers` table.
7. List products whose name starts with `S`.
8. Show orders sorted by order date (latest first).
9. Find employees whose salary is between 40,000 and 70,000.
10. Display the top 5 most expensive products.

---

# 🟡 MEDIUM (10 Questions) — Aggregation & Joins

**Topic: GROUP BY, HAVING**

11. Find total number of customers in each city.
12. Calculate total sales amount per product.
13. Find average salary for each department.
14. List products that have been ordered more than 10 times.
15. Find customers who placed more than 3 orders.

**Topic: JOINS (Industry Use Cases)**

16. Display order details along with customer name.
17. Show product name and total quantity sold.
18. List employees and the total number of orders they handled.
19. Find customers who have never placed an order.
20. Display all orders along with product price and customer city.

---

# 🔴 HARD (10 Questions) — Subqueries, Window Functions, Real Scenarios

**Topic: Subqueries**

21. Find customers who spent more than the average customer spending.
22. Get the second highest priced product.
23. Find employees whose salary is higher than the average salary of their department.
24. List products that were ordered but are not present in `order_archive`.

**Topic: Advanced Industry Problems**

25. Identify customers who placed orders in both `orders` and `order_archive`.
26. Find employees who have handled the highest number of orders.
27. Show cumulative total sales ordered by order date.
28. Find the most sold product (by quantity).
29. Detect duplicate orders based on customer, product, and order date.
30. Find customers whose last order was more than 6 months ago.

---

## ✅ How to Practice (Important)

* Write **each query yourself**
* First try **without joins**, then optimize
* Rewrite **subquery → join** where possible
* Think like an **analyst**, not just syntax
