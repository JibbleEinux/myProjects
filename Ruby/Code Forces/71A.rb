a = gets.to_i
for i in 1..a
    b = gets
    c = b.length
    c = c - 1    
    if c <= 10
        puts b
    else
        d = c - 2
        print b[0]
        print d
        print b[c-1]
        puts
    end
end