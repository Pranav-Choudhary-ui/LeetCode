-- Last updated: 21/07/2026, 09:05:30
SELECT 
    unique_id, name
FROM 
    Employees AS e 
LEFT JOIN
    EmployeeUNI AS u 
    ON e.id = u.id;