CLASS calculator DEFINITION.
  PUBLIC SECTION.
    METHODS: add IMPORTING iv_a TYPE i
                          iv_b TYPE i
                          RETURNING VALUE(rv_sum) TYPE i.
ENDCLASS.

CLASS calculator IMPLEMENTATION.
  METHOD add.
    rv_sum = iv_a + iv_b.
  ENDMETHOD.
ENDCLASS.

START-OF-SELECTION.
  DATA(calc) = NEW calculator( ).
  DATA(result) TYPE i.

  result = calc->add( iv_a = 10 iv_b = 20 ).

  WRITE: / 'The sum is:', result.
