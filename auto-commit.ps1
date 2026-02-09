# Auto-commit and push script for DSA practice
$repoPath = "c:\Users\Ayush\Desktop\dsa"
$lastCommitTime = Get-Date

while ($true) {
    try {
        cd $repoPath
        
        # Check for changes
        $status = git status --porcelain
        
        if ($status) {
            # Commit and push changes
            git add .
            $timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
            git commit -m "Auto-commit: Practice update - $timestamp"
            git push
            Write-Host "✓ Changes committed and pushed at $timestamp"
        }
        
        # Wait 30 seconds before checking again
        Start-Sleep -Seconds 30
    }
    catch {
        Write-Host "Error: $_"
        Start-Sleep -Seconds 30
    }
}
