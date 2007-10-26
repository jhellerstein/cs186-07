\o runtests.out/mem
select id from testgist25 where the_box ~~ '(0.5,0.5,0.5,0.5)';