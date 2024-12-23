# Write your MySQL query statement below
select c.class as class 
from Courses as c
group by c.class 
having count(class)>=5 