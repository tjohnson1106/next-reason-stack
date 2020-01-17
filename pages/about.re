let str = React.string;

let make = () =>
  <Section title="About Page" subtitle="This is the about page">
    <p>
      {"Lorem ipsum dolor sit amet consectetur adipisicing elit. Ipsam ipsa enim, officiis?"
       |> str}
    </p>
  </Section>;

let default = make;