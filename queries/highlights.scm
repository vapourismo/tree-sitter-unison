(namespace
  (regular_identifier) @namespace)

(use_statement
  "use" @keyword)

(declaration
  ":" @keyword.operator)

(type_constructor
  (uppercase_qualified_identifier
    subject: (uppercase_identifier) @type))

(type_unit) @type

(type_forall
  "forall" @keyword
  "." @keyword.operator)

(type_lazy
  "'" @keyword.operator)

(type_infix
  operator: 
    (qualified_operator
      (operator) @operator))