# Write your MySQL query statement below
select t1.name as Employee  
from Employee as t1
where t1.salary>(select t2.salary from Employee as t2  where t2.id=t1.managerId)

