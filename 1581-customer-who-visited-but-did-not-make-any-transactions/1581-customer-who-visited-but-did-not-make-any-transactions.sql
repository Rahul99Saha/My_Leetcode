# Write your MySQL query statement below
select customer_id,COUNT(customer_id) AS count_no_trans
from Visits LEFT JOIN Transactions
ON Visits.visit_id=Transactions.visit_id
WHERE transaction_id is NULL 
GROUP BY Visits.customer_id