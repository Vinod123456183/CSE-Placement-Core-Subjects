---

![img](img.png)

# SQL Practice: Numeric & Date/Time Functions

---

## 🟢 EASY (Basic Numeric Functions) — 8 Questions

1. Round the product price to the nearest integer.
2. Get the ceiling value of order amounts.
3. Get the floor value of employee salaries.
4. Find the absolute value of any negative discounts.
5. Increment all product stock by 1.
6. Calculate the square root of order amounts.
7. Calculate the power of 2 raised to the number of items in an order.
8. Truncate product prices to 2 decimal places.

---

## 🟡 MEDIUM (Numeric + Conditional Calculations) — 8 Questions

9. Add 10% tax to all product prices.
10. Calculate the discount amount given a price and discount percentage.
11. Round salaries to the nearest 1000.
12. Find the remainder when employee ID is divided by 5.
13. Calculate the average of two numeric columns per row.
14. Convert product weight from grams to kilograms.
15. Increase order quantity by 1 if quantity is greater than 10.
16. Find the absolute difference between order amount and discounted price.

---

## 🔴 HARD (Advanced Numeric + Date/Time) — 8 Questions

17. Calculate the number of days between `order_date` and `delivery_date`.
18. Find the age of customers based on their date of birth.
19. Add 7 days to all orders placed in the last month.
20. Extract the month and year from `order_date`.
21. Find orders placed on weekends.
22. Calculate the difference in hours between `created_at` and `updated_at` timestamps.
23. Round order amounts to the nearest 0.05 (for currency rounding).
24. Calculate the employee tenure in years from `joining_date`.

---

## ✅ COMMON ROW-LEVEL NUMERIC FUNCTIONS

| Function                       | Example Use          |
| ------------------------------ | -------------------- |
| `ROUND()`                      | Round numbers        |
| `CEIL()` / `CEILING()`         | Round up             |
| `FLOOR()`                      | Round down           |
| `ABS()`                        | Absolute value       |
| `SQRT()`                       | Square root          |
| `POWER()`                      | Power calculation    |
| `MOD()`                        | Remainder            |
| `TRUNCATE()`                   | Truncate decimals    |
| Arithmetic operators `+ - * /` | Per-row calculations |

---

## ✅ COMMON ROW-LEVEL DATE/TIME FUNCTIONS

| Function                       | Example Use                  |
| ------------------------------ | ---------------------------- |
| `CURRENT_DATE` / `NOW()`       | Current date/time            |
| `DATE_ADD()` / `DATE_SUB()`    | Add/subtract days            |
| `DATEDIFF()`                   | Difference in days           |
| `TIMESTAMPDIFF()`              | Difference in specific units |
| `YEAR()` / `MONTH()` / `DAY()` | Extract parts of date        |
| `DAYOFWEEK()`                  | Find day of the week         |
| `DATE_FORMAT()`                | Format date                  |
| `EXTRACT()`                    | Extract components           |

---

## ✅ PRACTICE TIPS

* Combine numeric + date functions with **WHERE conditions**.
* Test on **one row first** before applying to the table.
* Use these functions for **reporting, KPI calculations, and data cleaning**.
* Always handle **NULLs and invalid dates**.

---
