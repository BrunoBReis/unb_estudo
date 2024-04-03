# Git commands

git status

git add *filePath*

git commit -m "message"

git checkout -b *newBranchName*

git branch *newBranchName*

git switch *branchName* == git checkout *branchName*

git checkout *commitName*

git merge *branchMerges*
(merging bugFix into main == main-> git merge *bugFix*)

git rebase *branchName*
(copies branchName's commit history into presentBranch)

git reset *commit* => git reset HEAD~1 or git reset HEAD^
(reset commit locally)

git revert *commit* =>  git revert HEAD~1
(revert pushed changes) 
