(setq shaw-translation-map 
      '(("10450" . "𐑐")
        ("10451" . "𐑑")
        ("10452" . "𐑒")
        ("10453" . "𐑓")
        ("10454" . "𐑔")
        ("10455" . "𐑕")
        ("10456" . "𐑖")
        ("10457" . "𐑗")
        ("10458" . "𐑘")
        ("10459" . "𐑙")

        ("1045a" . "𐑚")
        ("1045b" . "𐑛")
        ("1045c" . "𐑜")
        ("1045d" . "𐑝")
        ("1045e" . "𐑞")
        ("1045f" . "𐑟")
        ("10460" . "𐑠")
        ("10461" . "𐑡")
        ("10462" . "𐑢")
        ("10463" . "𐑣")

        ("10464" . "𐑤")
        ("10465" . "𐑥")
        ("10466" . "𐑦")
        ("10467" . "𐑧")
        ("10468" . "𐑨")
        ("10469" . "𐑩")
        ("1046a" . "𐑪")
        ("1046b" . "𐑫")
        ("1046c" . "𐑬")
        ("1046d" . "𐑭")

        ("1046e" . "𐑮")
        ("1046f" . "𐑯")
        ("10470" . "𐑰")
        ("10471" . "𐑱")
        ("10472" . "𐑲")
        ("10473" . "𐑳")
        ("10474" . "𐑴")
        ("10475" . "𐑵")
        ("10476" . "𐑶")
        ("10477" . "𐑷")

        ("10478" . "𐑸")
        ("10479" . "𐑹")
        ("1047a" . "𐑺")
        ("1047b" . "𐑻")
        ("1047c" . "𐑼")
        ("1047d" . "𐑽")
        ("1047e" . "𐑾")
        ("1047f" . "𐑿")))

;;; UC_LNX sends a C-S-u then the numbers that make up the unicode. so I just have a function that will read the numbers and put that into a map.
(global-set-key (kbd "C-S-u") #'(lambda nil (interactive "") (insert (read-key-until-space))))
(defun read-key-until-space ()          ;unbelievable hack, what the fuck
  (let ((key nil)
        (code-length 4)                 ;should be read until the space at the end of the key sequence but I'm to lazy.  It's only ever going to use this unicode block right??
        (code '()))
    (while (>= code-length 0)
      (decf code-length)
      (setq key (read-key))
      (setq code (cons key code)))
    (read-key)
    (let ((char-code (mapconcat 'byte-to-string (reverse code) "")))
      (cdr (assoc char-code shaw-translation-map)))))