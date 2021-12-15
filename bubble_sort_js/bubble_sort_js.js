var size_array = 0;
function sort_func(sortA, len, repeat) {
  var sort = [];

  // Loop through array values
  for (var value of sortA) {
    sort.push(value);
  }
  size_array = sort.length;
  len = len - 1;
  var t = true;
  var j = 0;

  while (t) {
    for (var i = 0; i <= len - 1; i++) {
      if (sort[i] > sort[i + 1]) {
        var tmp = sort[i];
        sort[i] = sort[i + 1];
        sort[i + 1] = tmp;
        j = 0;
      } else if (sort[i] == sort[i + 1] && !repeat) {
        var del = i;
        for (var a = del - 1; a < len; a++) {
          sort[del] = sort[del + 1];
          del++;
        }

        size_array--;
        len--;
        j = 0;
      } else {
        if (j == len) t = false;
        else j++;
      }
    }
  }
  return sort;
}

var to_sort = [1, 3, 1, 4, 254, 23, 423, 2, 1, 2, 3];
var sorted = sort_func(to_sort, to_sort.length, true);
for (var i = 0; i <= size_array - 1; i++) document.write(sorted[i] + "<br>");
