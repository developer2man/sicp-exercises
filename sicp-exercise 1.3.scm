(define (square x) (* x x))
 
 

(define (sum_of_two_larger x y z)
    (+ (square (cond ( (> x y) x) ( (> x y) x) (else 0)))
       (square (cond ( (> y x) y) ( (> y z) y) (else 0)))
       (square (cond ( (> z x) z) ( (> z y) z) (else 0)))
       )
    )

(display (sum_of_two_larger 10 23 64))
