def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors
ok = False
ok2 = False
a,b = map(int, input().split())
l, k = prime_factors(a),prime_factors(b)
if l == k:
    print("YES")
else:
    if len(l)==len(k):
        
        ll = l.copy()
        kk = k.copy()
        for i in range(len(l)):
            ll[i],kk[i] = kk[i],ll[i]
            if sorted(ll) == sorted(kk):
                ok = True
                break
        if ok:
            print("YES")
        else:print("NO")
    else:
        
        if len(l)<len(k):
            for i in range(len(k)):
                l.append(k[i])
                k.pop(i)
                if sorted(l) == sorted(k):
                    ok2 = True
                    break
        else:
            for i in range(len(l)):
                k.append(l[i])
                l.pop(i)
                if sorted(l) == sorted(k):
                    ok2 = True
                    break
        if ok2:
            print("YES")
        else:
            print("NO")
    

