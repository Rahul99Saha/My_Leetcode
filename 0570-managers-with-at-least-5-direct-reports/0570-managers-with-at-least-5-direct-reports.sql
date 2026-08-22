# Write your MySQL query statement below
select m.name from Employee e 
join Employee m
where m.id = e.managerId
GROUP BY m.id
HAVING COUNT(*)>=5