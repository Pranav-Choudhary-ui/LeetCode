-- Last updated: 21/07/2026, 09:05:18
SELECT 
    tweet_id 
FROM 
    Tweets
WHERE 
    LENGTH(content) > 15;