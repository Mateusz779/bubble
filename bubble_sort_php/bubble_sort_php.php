<?php
$size_array=0;
function sort_func($sort,$len,$repeat)
        {
            $len = $len - 1;
            $t = true;
            $j = 0;
            while ($t)
            {
                for ($i = 0; $i <= $len - 1; $i++)
                {
                    if ($sort[$i] > $sort[$i + 1])
                    {
                        $tmp = $sort[$i];
                        $sort[$i] = $sort[$i + 1];
                        $sort[$i + 1] = $tmp;
                        $j = 0;
                    }
                    else if ($sort[$i] == $sort[$i + 1]&& !$repeat)
                    {
                        $del = $i;
                        for ($a = $del - 1; $a < $len; $a++){
                            $sort[$del] = $sort[$del + 1];
                            $del++;
                        }
                        
                        $size_array--;
                        $len--;
                        $j = 0;
                    }

                    else
                    {
                        if ($j == $len)
                            $t = false;
                        else
                            $j++;
                    }
                }
            }
            return $sort;
        }

$to_sort=array(1, 223, 54, 32,1,2,3,5,1,1,1,64);
$sorted= & sort_func($to_sort,count($to_sort),false);

for($i=0;$i<=count($sorted)-1;$i++)
    echo "$sorted[$i] \n";

