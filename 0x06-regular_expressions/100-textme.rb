#!/usr/bin/env ruby
my_string = ARGV[0].scan(/from:([^\]]*).*to:([^\]]*).*flags:([^\]]*)/)
my_string.each do | i |
  puts i.join(",")
end
