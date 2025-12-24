**!\[img](img.png)**



**# 🟢 EASY DML (10 Questions)**



**\*\*INSERT / UPDATE / DELETE basics\*\***



**1. Insert a new customer into `customers`.**

**2. Add a new product with price and category.**

**3. Insert a new employee into the `Sales` department.**

**4. Update the price of a product by increasing it by 10%.**

**5. Update customer email where customer ID = 5.**

**6. Delete a product that is discontinued.**

**7. Update employee salary for all employees in `IT` department.**

**8. Insert multiple products in a single query.**

**9. Delete customers who are marked as inactive.**

**10. Update order status to `Completed` for a given order ID.**



**---**



**# 🟡 MEDIUM DML (10 Questions)**



**\*\*DML with conditions, subqueries, joins\*\***



**11. Insert into `order\_archive` all orders older than 1 year.**

**12. Delete orders from `orders` that already exist in `order\_archive`.**

**13. Update product price based on average price of all products.**

**14. Increase salary by 5% for employees who handled more than 10 orders.**

**15. Update order status to `High Value` for orders with total amount > 50,000.**

**16. Insert customers who placed orders into a new reporting table.**

**17. Delete duplicate products based on product name.**

**18. Update customers’ city to `Unknown` where city is NULL.**

**19. Insert orders using data from another table.**

**20. Delete employees who have never handled any orders.**



**---**



**# 🔴 HARD DML (10 Questions)**



**\*\*Advanced industry-level DML scenarios\*\***



**21. Move completed orders from `orders` to `order\_archive` and delete them from `orders`.**

**22. Update product stock after orders are placed.**

**23. Correct wrongly entered order amounts using a subquery.**

**24. Update employee performance rating based on total sales handled.**

**25. Delete customers who have not placed any order in the last 2 years.**

**26. Insert missing products into `products` table based on orders data.**

**27. Roll back a transaction if any update fails.**

**28. Update multiple columns in `orders` based on product category.**

**29. Merge duplicate customer records into a single customer.**

**30. Soft-delete orders by updating a flag instead of deleting records.**



**---**



**## ✅ How to Practice DML Safely (Very Important)**



**\* Always run `SELECT` before `UPDATE` or `DELETE`**

**\* Use `BEGIN TRANSACTION`**

**\* Verify affected row count**

**\* Avoid DELETE without WHERE**

**\* Prefer soft deletes in production**



