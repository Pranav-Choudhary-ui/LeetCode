-- Last updated: 21/07/2026, 09:06:21
SELECT e.name, b.bonus
FROM
Employee e LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000 
OR b.bonus IS NULL;