let str = React.string;

[@react.component]
let make = () =>
  <Section
    title="Bracket Factory"
    subtitle="BF Blog built ReasonML, NextJS and Bulma CSS">
    <p>
      {"Lorem ipsum dolor sit amet consectetur adipisicing elit.
     In odit fugiat dolores fuga,  vel omnis quae rerum modi cumque tempora."
       |> str}
    </p>
    <p>
      {"Lorem ipsum dolor, sit amet consectetur adipisicing elit. Animi sunt harum ullam distinctio temporibus architecto quas sequi saepe nam odio."
       |> str}
    </p>
  </Section>;

let default = make;