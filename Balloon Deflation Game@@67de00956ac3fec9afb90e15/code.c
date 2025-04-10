void deflateBalloons(int air[], int n) {
    // Count initial balloons with air (excluding already flat ones)
    int balloons_with_air = 0;
    for (int i = 0; i < n; i++) {
        if (air[i] > 0) {
            balloons_with_air++;
        }
    }
    
    // Continue until all balloons are flat
    while (balloons_with_air > 0) {
        // Print count of balloons with air at the start of this round
        printf("%d\n", balloons_with_air);
        
        // Find the minimum air value among non-flat balloons
        int min_air = -1;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                if (min_air == -1 || air[i] < min_air) {
                    min_air = air[i];
                }
            }
        }
        
        // Release the minimum amount of air from all balloons
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min_air;
                
                // If a balloon becomes flat, decrease the count
                if (air[i] <= 0) {
                    balloons_with_air--;
                }
            }
        }
    }
}