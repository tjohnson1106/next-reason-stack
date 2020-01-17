let str = React.string;

[@react.component]
let make = () =>
  <Section title="Contact" subtitle="This is the contact page">
    <p>
      {"Lorem, ipsum dolor sit elit. Commodi alias dolorum reprehenderit placeat nam."
       |> str}
    </p>
  </Section>;

let default = make;