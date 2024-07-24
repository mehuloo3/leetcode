# Write your MySQL query statement below
SELECT product_name,year,price
from Product
RIGHT JOIN Sales
ON Sales.product_id=Product.product_id;