void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Step 1: Create dense ranks for the leaderboard scores
    int denseRanks[200000];
    
    // First entry always has rank 1
    denseRanks[0] = 1;
    
    // Calculate dense ranks for the leaderboard
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i-1]) {
            // Same score gets same rank
            denseRanks[i] = denseRanks[i-1];
        } else {
            // Different score gets next rank (not skipping)
            denseRanks[i] = denseRanks[i-1] + 1;
        }
    }
    
    // Step 2: Find rank after each game
    for (int i = 0; i < m; i++) {
        int currentScore = player[i];
        int rank = 1;  // Default rank if score is higher than all leaderboard scores
        
        // Binary search could be used here for better efficiency, but using linear search for clarity
        for (int j = 0; j < n; j++) {
            if (currentScore < ranked[j]) {
                // If current score is less than leaderboard score, increase rank
                rank = denseRanks[j] + 1;
            } else if (currentScore == ranked[j]) {
                // If scores are equal, get the same rank
                rank = denseRanks[j];
                break;
            } else {
                // If current score is greater, we've found our position
                break;
            }
        }
        
        result[i] = rank;
    }
}