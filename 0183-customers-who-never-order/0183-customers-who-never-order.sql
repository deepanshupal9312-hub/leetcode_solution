# Write your MySQL query statement below
select name as customers from Customers c left join  Orders o on  c.id=o.customerId where o.id is NULL;