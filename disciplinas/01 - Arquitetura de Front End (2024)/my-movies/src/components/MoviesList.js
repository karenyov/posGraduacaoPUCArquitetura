import { MovieItem } from "./MovieItem";

export const MoviesList = ({ movies }) => (
  <section>
    <ul>
      { movies.map(movie => <MovieItem {...movie} key={movie.id} /> )}
    </ul>
  </section>
);