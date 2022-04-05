# Merge Without Extra Space
##  Hard 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two sorted arrays <strong>arr1[]</strong> and <strong>arr2[] </strong>of<strong>&nbsp;</strong>sizes <strong>n</strong>&nbsp;and <strong>m</strong>&nbsp;in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements. </span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
<strong>Output</strong>: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
<strong>Explanation</strong>:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
n = 2, arr1[] = [10, 12] 
m = 3, arr2[] = [5 18 20]
<strong>Output</strong>: 
arr1[] = [5 10]
arr2[] = [12 18 20]
<strong>Explanation</strong>:
After merging two sorted arrays 
we get 5 10 12 18 20.</span>


</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong> merge()&nbsp;</strong>that takes arr1, arr2, n&nbsp;and m&nbsp;as input parameters and modifies them in-place so that they look like the sorted merged array when concatenated.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> &nbsp;O((n+m) log(n+m))<br>
<strong>Expected Auxilliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= n, m&nbsp;&lt;= 5*10<sup>4</sup><br>
0 &lt;= arr1<sub>i</sub>, arr2<sub>i</sub>&nbsp;&lt;= 10<sup>7</sup></span></p>
 <p></p>
            </div>